/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:04:43 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/Cards.framework/Cards
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CRCardSectionViewAppearanceFeedback.h>

@protocol CRCardSection;
@class NSString, SFFeedback;

@interface CRBasicCardSectionViewAppearanceFeedback : NSObject <CRCardSectionViewAppearanceFeedback> {

	id<CRCardSection> _cardSection;

}

@property (nonatomic,retain) id<CRCardSection> cardSection;               //@synthesize cardSection=_cardSection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) SFFeedback * backingFeedback; 
-(id<CRCardSection>)cardSection;
-(void)setCardSection:(id<CRCardSection>)arg1 ;
@end

