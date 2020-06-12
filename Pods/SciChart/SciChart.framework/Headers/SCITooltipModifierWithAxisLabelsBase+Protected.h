//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2019. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCITooltipModifierWithAxisLabelsBase+Protected.h is part of SCICHART®, High Performance Scientific Charts
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

#import "SCITooltipModifierWithAxisLabelsBase.h"
#import "SCITooltipModifierBase+Protected.h"
#import "SCIAxisTooltipsBehaviorBase.h"

/**
 * The extensions in this header are to be used only by subclasses of `SCITooltipModifierWithAxisLabelsBase`.
 */
@interface SCITooltipModifierWithAxisLabelsBase ()

/**
 * Creates a new instance of `SCITooltipModifierWithAxisLabelsBase` class.
 * @param tooltipBehavior The `SCITooltipBehavior` which will be associated with this modifier.
 * @param axisTooltipsBehavior The `SCIAxisTooltipsBehaviorBase` which will be associated with this modifier.
 */
- (instancetype)initWithTooltipBehavior:(SCITooltipBehaviorBase *)tooltipBehavior andAxisTooltipsBehavior:(SCIAxisTooltipsBehaviorBase *)axisTooltipsBehavior NS_DESIGNATED_INITIALIZER;

/**
 * Gets the collection of the X-Axis from the parent `SCIChartSurface`.
 */
@property (nonatomic, readonly) SCIObservableCollection<id<ISCIAxis>> *xAxesWithOverlays;

/**
 * Gets the collection of the Y-Axis from the parent `SCIChartSurface`.
 */
@property (nonatomic, readonly) SCIObservableCollection<id<ISCIAxis>> *yAxesWithOverlays;

@end
