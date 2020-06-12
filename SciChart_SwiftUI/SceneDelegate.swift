//
//  SceneDelegate.swift
//  SciChart_SwiftUI
//
//  Created by Andriy Pohorilko on 09.06.2020.
//  Copyright © 2020 Andriy Pohorilko. All rights reserved.
//

import UIKit
import SwiftUI
import SciChart

class SceneDelegate: UIResponder, UIWindowSceneDelegate {

    var window: UIWindow?


    func scene(_ scene: UIScene, willConnectTo session: UISceneSession, options connectionOptions: UIScene.ConnectionOptions) {
        // Use this method to optionally configure and attach the UIWindow `window` to the provided UIWindowScene `scene`.
        // If using a storyboard, the `window` property will automatically be initialized and attached to the scene.
        // This delegate does not imply the connecting scene or session are new (see `application:configurationForConnectingSceneSession` instead).

        // Create the SwiftUI view that provides the window contents.
        let contentView = ContentView()

        // Use a UIHostingController as window root view controller.
        if let windowScene = scene as? UIWindowScene {
            let window = UIWindow(windowScene: windowScene)
            window.rootViewController = UIHostingController(rootView: contentView)
            self.window = window
            window.makeKeyAndVisible()
        }
        
        SCIChartSurface.setRuntimeLicenseKey("LmojcQHzY/ioY07iU7/qLqj0im/BUtIPINpdPgu3812fC2M7NjLjqjzGblj2GT+17enk15MEZiHXC2RoaESiH0dZYjeZSMQ2gXqFQGl5H2pWad9K2iOsQ2Cd8pCQirX0ViMFeE7Z7F1dFFBwh8muVyFIUWCcLIaePknSxF7Gt9q28zQtVttvP8OfFpwCu2GS9Ag1WHlMe3usd5YvWGl4rEK8iCVmJRY+lftG6JQ0+Pqr2tiTO1wMqgkpXDKv17E0UL70WKKy0A17vTudz1Rk2RMkhwIypt809VOUDwJRMQflb62P1cPaG6r3y/U9XX/ipsCtYJ/YJqULMcPh28UmASoIldIz/4tlYuO7ZxvcZZXDfygazYtGp2Un9ExEMRvhQjd3A/Oc9WYwO7AeQy32NrSzPsYqb7jiV6+4tIxYVXAluzWxTV6p9rjH1JDVRQ6G7aeSq56x8oGa33pK6VDtQ71ECSxrOsjZjL1uDyPhQI4uoaQriG97uxFNt6wTCtjA4N5gywXi")
    }

    func sceneDidDisconnect(_ scene: UIScene) {
        // Called as the scene is being released by the system.
        // This occurs shortly after the scene enters the background, or when its session is discarded.
        // Release any resources associated with this scene that can be re-created the next time the scene connects.
        // The scene may re-connect later, as its session was not neccessarily discarded (see `application:didDiscardSceneSessions` instead).
    }

    func sceneDidBecomeActive(_ scene: UIScene) {
        // Called when the scene has moved from an inactive state to an active state.
        // Use this method to restart any tasks that were paused (or not yet started) when the scene was inactive.
    }

    func sceneWillResignActive(_ scene: UIScene) {
        // Called when the scene will move from an active state to an inactive state.
        // This may occur due to temporary interruptions (ex. an incoming phone call).
    }

    func sceneWillEnterForeground(_ scene: UIScene) {
        // Called as the scene transitions from the background to the foreground.
        // Use this method to undo the changes made on entering the background.
    }

    func sceneDidEnterBackground(_ scene: UIScene) {
        // Called as the scene transitions from the foreground to the background.
        // Use this method to save data, release shared resources, and store enough scene-specific state information
        // to restore the scene back to its current state.
    }


}

