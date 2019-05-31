/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:08:03 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class _UICollectionLayoutGeometryGroupSolution;

@interface _UILayoutGeometrySolutionBookmark : NSObject {

	_UICollectionLayoutGeometryGroupSolution* _groupSolution;
	CGRect _frame;
	long long _indexOffset;

}

@property (nonatomic,readonly) _UICollectionLayoutGeometryGroupSolution * groupSolution;              //@synthesize groupSolution=_groupSolution - In the implementation block
@property (nonatomic,readonly) long long indexOffset;                                                 //@synthesize indexOffset=_indexOffset - In the implementation block
@property (nonatomic,readonly) CGRect frame;                                                          //@synthesize frame=_frame - In the implementation block
+(id)bookmarkWithLayoutGeometryGroupSolution:(id)arg1 indexOffset:(long long)arg2 frame:(CGRect)arg3 ;
-(CGRect)frame;
-(_UICollectionLayoutGeometryGroupSolution *)groupSolution;
-(long long)indexOffset;
-(id)initWithLayoutGeometryGroupSolution:(id)arg1 indexOffset:(long long)arg2 frame:(CGRect)arg3 ;
@end

