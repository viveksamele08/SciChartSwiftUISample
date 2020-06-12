//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2019. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIPointLineRenderPassData3D.h is part of SCICHART®, High Performance Scientific Charts
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

#import "SCIXyzRenderPassData3D.h"

@class SCIUnsignedIntegerValues;
@class SCIFloatValues;

/**
 * Defines `SCIPointLineRenderPassData3D`, the data used in a single render pass by `SCIPointLineRenderableSeries3D`.
 */
@interface SCIPointLineRenderPassData3D : SCIXyzRenderPassData3D

/**
 * Gets the collection of point colors for the single render pass.
 */
@property (strong, nonatomic, readonly) SCIUnsignedIntegerValues *pointColors;

/**
 * Gets the collection of line colors for the single render pass.
 */
@property (strong, nonatomic, readonly) SCIUnsignedIntegerValues *lineColors;

/**
 * Gets the collection of point sizes for the single render pass.
 */
@property (strong, nonatomic, readonly) SCIFloatValues *pointSizes;

@end
