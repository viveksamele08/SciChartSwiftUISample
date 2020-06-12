//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2019. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIColumnRenderPassData.h is part of SCICHART®, High Performance Scientific Charts
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

#import "SCIXyRenderPassData.h"

/**
 * Defines the `ISCISeriesRenderPassData`, the data used in a single render pass by `SCIBaseColumnRenderableSeries`.
 */
@interface SCIColumnRenderPassData : SCIXyRenderPassData

/**
 * Defines the value in pixels that determines each `column` width.
 */
@property (nonatomic) float columnPixelWidth;

/**
 * Defines the value which determines the zero line in `Y-direction`.
 * @note Used to set the bottom of the `column`.
 */
@property (nonatomic) float zeroLineCoord;

@end
