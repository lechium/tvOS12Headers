/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:05:08 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/Frameworks/MediaMiningKit.framework/MediaMiningKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaMiningKit/CLSCurationDebugObject.h>

@protocol CLSInvestigationItem;
@interface CLSCurationDebugItem : CLSCurationDebugObject {

	unsigned long long _dedupingType;
	CLSCurationDebugItem* _dedupedDebugItem;
	id<CLSInvestigationItem> _item;

}

@property (nonatomic,retain) id<CLSInvestigationItem> item;              //@synthesize item=_item - In the implementation block
+(id)stringForDedupingType:(unsigned long long)arg1 ;
-(id)initWithItem:(id)arg1 ;
-(void)dupeToDebugItem:(id)arg1 withDedupingType:(unsigned long long)arg2 ;
-(void)setItem:(id<CLSInvestigationItem>)arg1 ;
-(id<CLSInvestigationItem>)item;
-(id)timestamp;
-(id)dictionaryRepresentation;
@end

