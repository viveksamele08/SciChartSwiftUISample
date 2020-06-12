//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2019. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIDisplaceableFreeSurfaceDataSeries3D+Protected.h is part of SCICHART®, High Performance Scientific Charts
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

#import "SCIDisplaceableFreeSurfaceDataSeries3D.h"
#import "SCIFreeSurfaceDataSeries3D+Protected.h"
#import "SCIGridData.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * The extensions in this header are to be used only by subclasses of `SCIDisplaceableFreeSurfaceDataSeries3D`.
 */
@interface SCIDisplaceableFreeSurfaceDataSeries3D ()

@property (nonatomic, strong) SCIGridData<id<ISCIComparable>> *displacementMap;

- (instancetype)initWithXType:(SCIDataType)xType yType:(SCIDataType)yType zType:(SCIDataType)zType displacementType:(SCIDataType)displacementType uSize:(NSInteger)uSize vSize:(NSInteger)vSize uMin:(double)uMin uMax:(double)uMax vMin:(double)vMin vMax:(double)vMax;

@end

NS_ASSUME_NONNULL_END
