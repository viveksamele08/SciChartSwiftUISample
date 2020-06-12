//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2019. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIFastFixedErrorBarsRenderableSeries.h is part of SCICHART®, High Performance Scientific Charts
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

#import "SCIXyRenderableSeriesBase.h"
#import "SCIErrorDirection.h"
#import "SCIErrorMode.h"
#import "SCIErrorType.h"

/**
 * Provides Fast Error Bars rendering with fixed low and high errors.
 */
@interface SCIFastFixedErrorBarsRenderableSeries : SCIXyRenderableSeriesBase

/**
 * Gets or sets the `SCIPenStyle` for low error stroke.
 */
@property (strong, nonatomic, nullable) SCIPenStyle *strokeLowStyle;

/**
 * Gets or sets the `SCIPenStyle` for low error stroke.
 */
@property (strong, nonatomic, nullable) SCIPenStyle *strokeHighStyle;

/**
 * Gets or sets the `SCIErrorDirection` value for this series.
 */
@property (nonatomic) SCIErrorDirection errorDirection;

/**
 * Gets or sets the `SCIErrorMode` value for this series.
 */
@property (nonatomic) SCIErrorMode errorMode;

/**
 * Gets a value between 0.0 and 1.0 which defines the fraction of available space each column should occupy.
 */
@property (nonatomic) double dataPointWidth;

/**
 * Gets or sets the `SCIErrorType` value for this series.
 */
@property (nonatomic) SCIErrorType errorType;

/**
 * Gets or sets the error low value for this series.
 */
@property (nonatomic) double errorLow;

/**
 * Gets or sets the error high value for this series.
 */
@property (nonatomic) double errorHigh;

@end
