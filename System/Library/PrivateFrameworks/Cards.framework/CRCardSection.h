/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:04:43 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/Cards.framework/Cards
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSArray;


@protocol CRCardSection <NSObject,NSCopying>
@property (nonatomic,readonly) NSString * cardSectionIdentifier; 
@property (nonatomic,readonly) id<SFCardSection> backingCardSection; 
@property (nonatomic,readonly) NSArray * actionCommands; 
@property (nonatomic,readonly) BOOL hasNextCard; 
@optional
-(id)parametersForInteraction:(id)arg1;
-(BOOL)hasNextCard;
-(NSArray *)actionCommands;
-(id<SFCardSection>)backingCardSection;

@required
-(NSString *)cardSectionIdentifier;

@end

