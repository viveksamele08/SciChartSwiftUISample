//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2019. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIRenderableSeries3DCollection.h is part of SCICHART®, High Performance Scientific Charts
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

#import "SCIObservableCollection.h"
#import "ISCIRenderableSeries3D.h"

/**
 * Contains a collection of `ISCIRenderableSeries3D`
 */
@interface SCIRenderableSeries3DCollection : SCIObservableCollection<id<ISCIRenderableSeries3D>>

/**
 * Initializes a new instance of `SCIRenderableSeries3DCollection` class.
 * @param collection The collections with items to add.
 */
- (instancetype)initWithCollection:(NSArray<id<ISCIRenderableSeries3D>> *)collection;

@end
