import Foundation
import SwiftUI
import SciChart

struct ContentView: View {
    
    @ObservedObject var dataSource = DataSource()
    var body: some View {
        TrendViewController(lineDataSeries:dataSource.lineDataSeries, chartSurface:dataSource.chartSurface)
        
    }
}
class DataSource: ObservableObject {
  var chartSurface=SCIChartSurface()

    var value: Int = 0
 
    @Published var  lineDataSeries = SCIXyDataSeries(xType: .float, yType: .float)

 
    private let TimeInterval = 30.0
    @State var _timer: Timer?
    
    let yValues = [50, 35, 61, 58, 50, 50, 40, 53, 55, 23, 45, 12, 59, 60];
    
    init() {
        Timer.scheduledTimer(withTimeInterval: 1, repeats: true) { timer in
            self.value += 1
//            if(self.value>=self.yValues.count){
//                self.value=0
//            }
            let randomDouble = Double.random(in: 1...100)

            self.lineDataSeries.append(x: self.value, y: randomDouble)
            print(self.lineDataSeries.yValues.toArray())
            
                self.chartSurface.zoomExtents()
        }
    }
    
    

}
