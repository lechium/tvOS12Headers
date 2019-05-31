/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:04:43 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/Cards.framework/Cards
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CRAsyncCardRequestFeedback.h>

@protocol CRCard;
@class NSString, SFFeedback;

@interface CRBasicAsyncCardRequestFeedback : NSObject <CRAsyncCardRequestFeedback> {

	id<CRCard> baseCard;
	id<CRCard> requestedCard;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) SFFeedback * backingFeedback; 
@property (nonatomic,retain) id<CRCard> baseCard; 
@property (nonatomic,retain) id<CRCard> requestedCard; 
-(id<CRCard>)baseCard;
-(id<CRCard>)requestedCard;
-(void)setBaseCard:(id<CRCard>)arg1 ;
-(void)setRequestedCard:(id<CRCard>)arg1 ;
@end

