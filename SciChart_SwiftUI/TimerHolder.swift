//
//  TimerHolder.swift
//  SciChart_SwiftUI
//
//  Created by Andriy Pohorilko on 09.06.2020.
//  Copyright © 2020 Andriy Pohorilko. All rights reserved.
//

import SwiftUI
import Combine

class TimerHolder {
    var timer : Timer!
    var onTimerAction: (() -> ())?
    
    init() {
        self.start()
    }
    
    func start() {
        self.timer?.invalidate()
        self.timer = Timer.scheduledTimer(withTimeInterval: 5, repeats: true) {
            _ in
            self.onTimerAction?()
        }
    }
}
