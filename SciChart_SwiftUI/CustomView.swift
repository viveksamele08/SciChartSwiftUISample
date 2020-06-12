import SwiftUI
import UIKit

struct CustomView : UIViewRepresentable

{
    @Binding var text : String


//    let willChange = PassthroughSubject<Void, Never>()
//
//    var textViewDoneEditing : Bool? {didSet {willChange.send()}}
//

    func makeCoordinator() -> Coordinator {

        return Coordinator(self)
    }


    class Coordinator : NSObject, UITextViewDelegate, ObservableObject

    {

    var parent: CustomView

           init(_ uiTextView: CustomView) {

               self.parent = uiTextView

           }

        func textViewDidChange(_ textView: UITextView) {

            parent.text = textView.text

        }


        func textViewDidEndEditing(_ textView: UITextView) {

            print("Ediiting is Done")


        }

    }

   func makeUIView(context: UIViewRepresentableContext<CustomView>) -> UITextView {


        let textView = UITextView()
        textView.delegate = context.coordinator

        return textView
    }


    func updateUIView(_ uiView: UITextView, context: UIViewRepresentableContext<CustomView>) {

        uiView.text = self.text

    }



}
