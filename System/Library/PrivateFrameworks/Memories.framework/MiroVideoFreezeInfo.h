/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:19 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Memories/Memories-Structs.h>
#import <Memories/MiroFreezeInfo.h>

@class NSArray;

@interface MiroVideoFreezeInfo : MiroFreezeInfo {

	NSArray* _ranges;

}

@property (nonatomic,retain) NSArray * ranges;              //@synthesize ranges=_ranges - In the implementation block
-(BOOL)isRemoved;
-(id)dataRepresentation;
-(NSArray *)ranges;
-(void)setRanges:(NSArray *)arg1 ;
-(BOOL)isAdded;
-(BOOL)isFreeze;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)token;
@end
