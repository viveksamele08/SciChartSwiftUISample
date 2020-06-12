//
//  TrendViewController.swift
//  TDDriveTool
//
//  Created by Vivek.Samele on 25/03/20.
//  Copyright © 2020 New. All rights reserved.
//

import Foundation
import SwiftUI
import SciChart
import Combine


struct TrendViewController: UIViewRepresentable {
    var  lineDataSeries = SCIXyDataSeries()
    let  chartSurface : SCIChartSurface

    @State var lineRenderableSeries: SCIFastLineRenderableSeries!
  
    func makeUIView(context: Context) -> SCIChartSurface {
 
        return initExample()
    }
    
    func updateUIView(_ uiView: SCIChartSurface, context: Context) {
 
        print("I am being called!")
        

            uiView.zoomExtents()
            uiView.invalidateElement()
    }
    
    private func initExample() -> SCIChartSurface {

        let fontStyle = SCIFontStyle(fontDescriptor: UIFontDescriptor(name: "Helvetica", size: 14), andTextColor: .green)
        
        chartSurface.autoresizingMask = [.flexibleHeight, .flexibleWidth]
        chartSurface.translatesAutoresizingMaskIntoConstraints = true
        
        //define x axis
        let xAxis = SCINumericAxis()
        xAxis.growBy = SCIDoubleRange(min: 0.1, max: 0.1)
        xAxis.axisTitle="Time"
        xAxis.cursorTextFormatting = "‘Time Value:''"
        xAxis.titleStyle = fontStyle
        
        // defining Yaxis here
        //1
        let yAxisleft1 = SCINumericAxis()
        yAxisleft1.growBy = SCIDoubleRange(min: 0, max: 0.1)
        yAxisleft1.axisAlignment=SCIAxisAlignment.left
        yAxisleft1.axisTitle="Channel 1"
        yAxisleft1.cursorTextFormatting = "‘Channel 1:''"
        
        //define a Line Series
        let rSeries = SCIFastLineRenderableSeries()
        rSeries.dataSeries = lineDataSeries
        rSeries.strokeStyle = SCISolidPenStyle(colorCode: 0xFF279B27, thickness: 2.0)
        
        chartSurface.renderableSeries.add(rSeries)
        chartSurface.xAxes.add(xAxis)
        chartSurface.yAxes.add(yAxisleft1)
        
        
        let pinchZoomModifier = SCIPinchZoomModifier()
              pinchZoomModifier.direction = .xDirection
              pinchZoomModifier.scaleFactor = 0.25
              
              let pinchZoomModifierY = SCIPinchZoomModifier()
              pinchZoomModifierY.direction = .yDirection
              pinchZoomModifierY.scaleFactor = 0.5
              
              
              // Add the modifier to the surface
              chartSurface.chartModifiers.add(pinchZoomModifier)
              chartSurface.chartModifiers.add(pinchZoomModifierY)
        
        //adding Drag X axis
               let xAxisDragModifier = SCIXAxisDragModifier()
               xAxisDragModifier.dragMode = .pan
               xAxisDragModifier.clipModeX = .stretchAtExtents
               xAxisDragModifier.clipModeX = .clipAtMax
               
               // Add the modifier to the surface
               chartSurface.chartModifiers.add(xAxisDragModifier)
        
        
        
        return chartSurface
    }
    


struct TrendViewController_Previews: PreviewProvider {
    static var previews: some View {
        /*@START_MENU_TOKEN@*/Text("Hello, World!")/*@END_MENU_TOKEN@*/
    }
}
}
