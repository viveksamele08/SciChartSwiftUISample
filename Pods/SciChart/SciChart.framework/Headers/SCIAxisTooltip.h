//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2019. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIAxisTooltip.h is part of SCICHART®, High Performance Scientific Charts
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

#import "SCITooltipBase.h"
#import "ISCIAxisTooltip.h"
#import "SCIAxisInfo.h"

/**
 * Defines the axis tooltip used by `ISCIChartModifier`.
 */
@interface SCIAxisTooltip : SCITooltipBase<ISCIAxisTooltip>

/**
 * Creates a new instance of `SCIAxisTooltip` class.
 * @param axisInfo The `SCIAxisInfo` instance.
 */
- (instancetype)initWithAxisInfo:(SCIAxisInfo *)axisInfo;

/**
  * Sets the background color for this `ISCISeriesTooltip` instance.
  * @param color Int color which will be used as a `background` color.
  */
- (void)setTooltipBackground:(unsigned int)color;

@end
