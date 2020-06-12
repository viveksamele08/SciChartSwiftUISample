//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2019. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCILinearGradientPenStyle.h is part of SCICHART®, High Performance Scientific Charts
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

#import "SCIPenStyle.h"
#import "SCILinearGradientBrushStyle.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * Defines a style class for lines with linear gradient which is used to draw 2D lines on the `ISCIRenderSurface`.
 */
@interface SCILinearGradientPenStyle : SCIPenStyle

/**
 * Get's the underlying `SCILinearGradientBrushStyle` which is used in this PenStyle instance.
 */
@property (strong, nonatomic, readonly) SCILinearGradientBrushStyle *gradientStyle;

/**
 * Creates a new SCILinearGradientPenStyle` instance.
 * @param gradientStyle The linear gradient style.
 * @param antiAliasing The value indicating whether the pen should use antialiasing or no.
 * @param thickness The stroke thickness in pixels.
 * @param strokeDashArray The stroke dash pattern.
 */
- (instancetype)initWithGradientStyle:(SCILinearGradientBrushStyle *)gradientStyle antiAliasing:(BOOL)antiAliasing thickness:(float)thickness strokeDashArray:(nullable NSArray<NSNumber *> *)strokeDashArray;

@end

NS_ASSUME_NONNULL_END
