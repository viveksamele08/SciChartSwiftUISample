//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2019. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCITooltipBehaviorBase+Protected.h is part of SCICHART®, High Performance Scientific Charts
// For full terms and conditions of the license, see http://www.scichart.com/scichart-eula/
//
// This source code is protected by international copyright law. Unauthorized
// reproduction, reverse-engineering, or distribution of all or any portion of
// this source code is strictly prohibited.
//
// This source code contains confidential and proprietary trade secrets of
// SciChart Ltd., and should at no time be copied, transferred, sold,
// distributed or made available without express written permission.
//******************************************************************************

#import "SCITooltipBehaviorBase.h"
#import "SCIModifierBehavior+Protected.h"
#import "SCIFunc1.h"

/**
 * The extensions in this header are to be used only by subclasses of `SCITooltipBehaviorBase`.
 */
@interface SCITooltipBehaviorBase ()

@property (nonatomic, readonly) SCIFunc1 projectionFunction;

@end

/**
 * The extensions in this header are to be used only by subclasses of `SCITooltipBehaviorBase`.
 */
@interface SCITooltipBehaviorBase (Protected)

/**
 * Called when the `SCITooltipBehaviorBase.observableSeries has drastically changed.
 */
- (void)onObservableSeriesDrasticallyChanged;

/**
 * Gets the value indicating whether the `SCIHitTestInfo` instance is valid.
 * @param hitTestInfo The `SCIHitTestInfo` instance to test.
 * @return YES -  if hit point is Valid.
 */
- (BOOL)isHitPointValid:(SCIHitTestInfo *)hitTestInfo;

/**
 * Gets the value indicating whether the ISCIRenderableSeries` instance is valid.
 * @param series The `ISCIRenderableSeries` instance to check.
 * @return True if the passed `ISCIRenderableSeries` instance is valid.
 */
- (BOOL)isSeriesValid:(id<ISCIRenderableSeries>)series;

@end
