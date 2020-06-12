# SciChartSwiftUISample

Swift UI Sample to Update the UI from Swift UI ,  it Shows how  to update UIViewRepresentable with ObservableObject. 





 ![GIf Image for Schichart ](https://github.com/viveksamele08/SciChartSwiftUISample/blob/master/record.gif)

1- Add your License like below in AppDelegae :- 

    SCIChartSurface.setRuntimeLicenseKey(" Your Key will come here")
 

2- To make sure your ObservedObject does not get created multiple times (you only want one copy of it), you can put it outside your UIViewRepresentable:


    struct ContentView: View {    
    @ObservedObject var dataSource = DataSource()
    var body: some View {
        TrendViewController(lineDataSeries:dataSource.lineDataSeries, chartSurface:dataSource.chartSurface)
        }
      }
3 - You can decorate your DataSource Object like below. 
   
   
   
      class DataSource: ObservableObject {
          var chartSurface=SCIChartSurface()
          var value: Int = 0
          @Published var  lineDataSeries = SCIXyDataSeries(xType: .float, yType: .float)
          private let TimeInterval = 30.0
          @State var _timer: Timer?
          init() {
          Timer.scheduledTimer(withTimeInterval: 1, repeats: true) { timer in
              self.value += 1

            let randomDouble = Double.random(in: 1...100)

            self.lineDataSeries.append(x: self.value, y: randomDouble)
            print(self.lineDataSeries.yValues.toArray())
            
                self.chartSurface.zoomExtents()
        }
        }
        }
    
