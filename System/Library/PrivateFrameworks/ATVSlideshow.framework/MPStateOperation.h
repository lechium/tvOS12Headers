/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:05 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVSlideshow/ATVSlideshow-Structs.h>
#import <ATVSlideshow/MPAction.h>

@class NSString;

@interface MPStateOperation : MPAction {

	NSString* _operation;
	NSString* _stateKey;

}

@property (nonatomic,copy) NSString * operation;              //@synthesize operation=_operation - In the implementation block
@property (nonatomic,copy) NSString * stateKey;               //@synthesize stateKey=_stateKey - In the implementation block
+(id)stateOperation;
-(void)setStateKey:(NSString *)arg1 ;
-(NSString *)stateKey;
-(id)init;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setAction:(id)arg1 ;
-(void)setOperation:(NSString *)arg1 ;
-(NSString *)operation;
@end

