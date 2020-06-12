//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2019. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIBandSeriesTooltip.h is part of SCICHART®, High Performance Scientific Charts
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

#import "SCISeriesTooltipBase.h"
#import "SCIBandSeriesInfo.h"

/**
 * Defines a color selector block for `SCIBandSeriesTooltip`.
 * Selects color for tooltip based on provided series info value.
 * @param seriesInfo The series info
 * @return The color for tooltip.
 */
typedef UIColor *(^SCIBandSeriesColorSelector) (SCIBandSeriesInfo *seriesInfo);

/**
 * Defines a tooltip for `SCIXyzSeriesInfo`.
 */
@interface SCIBandSeriesTooltip : SCISeriesTooltipBase<SCIBandSeriesInfo *>

/**
 * Provides the color selector for `Y Series` from `SCIFastBandRenderableSeries`.
 */
@property (class, nonatomic, readonly) SCIBandSeriesColorSelector ySeriesColorSelector;

/**
 * Provides the color selector for `Y1 Series` from `SCIFastBandRenderableSeries`.
 */
@property (class, nonatomic, readonly) SCIBandSeriesColorSelector y1SeriesColorSelector;

/**
 * Creates a new instance of `SCIBandSeriesTooltip` class.
 * @param seriesInfo The series info instance.
 */
- (instancetype)initWithSeriesInfo:(SCIBandSeriesInfo *)seriesInfo;

/**
 * Creates a new instance of `SCIBandSeriesTooltip` class.
 * @param seriesInfo The series info instance.
 * @param colorSelector The color selector for this tooltip.
 */
- (instancetype)initWithSeriesInfo:(SCIBandSeriesInfo *)seriesInfo andColorSelector:(SCIBandSeriesColorSelector)colorSelector;

@end
