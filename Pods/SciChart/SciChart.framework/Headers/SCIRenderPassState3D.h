//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2019. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIRenderPassState3D.h is part of SCICHART®, High Performance Scientific Charts
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

#import "SCIRenderPassStateCore.h"
#import "SCIBoolValues.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * Defines a class which stores some data for current render pass.
 */
@interface SCIRenderPassState3D : SCIRenderPassStateCore

/**
 * Defines the BOOL array indicating which panes should be clipped or not.
 */
@property (nonatomic) SCIBoolValues *clipPlanes;

/**
 * Gets or sets the viewport size for current render pass.
 */
@property (nonatomic) CGSize viewportSize;

/**
 * Creates new instance of `SCIRenderPassState3D` with initial `viewportSize`.
 * @param size The initial `viewportSize`.
 */
- (instancetype)initWithViewportSize:(CGSize)size;

@end

NS_ASSUME_NONNULL_END
