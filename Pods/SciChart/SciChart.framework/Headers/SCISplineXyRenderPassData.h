//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCISplineXyRenderPassData.h is part of SCICHART®, High Performance Scientific Charts
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
#import "ISCIBezierControlPointsProvider.h"

/**
 * Defines the `ISCISeriesRenderPassData`, the data used in a single render pass by `SCIXyRenderableSeriesBase`.
 */
@interface SCISplineXyRenderPassData : SCIXyRenderPassData

/**
 * Provides the collection of `XA-coordinates` for the single render pass.
 */
@property (strong, nonatomic) SCIFloatValues *xaCoords;

/**
 * Provides the collection of `YA-coordinates` for the single render pass.
 */
@property (strong, nonatomic) SCIFloatValues *yaCoords;

/**
 * Provides the collection of `XB-coordinates` for the single render pass.
 */
@property (strong, nonatomic) SCIFloatValues *xbCoords;

/**
 * Provides the collection of `YB-coordinates` for the single render pass.
 */
@property (strong, nonatomic) SCIFloatValues *ybCoords;

/**
 * Creates a new instance of `SCISplineXyRenderPassData` class.
 * @param bezierControlPointsProvider The provider of control points for bezier curves to draw
 */
- (instancetype)initWithControlPointsProvider:(id<ISCIBezierControlPointsProvider>)bezierControlPointsProvider;

@end
