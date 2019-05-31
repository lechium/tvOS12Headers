/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:04:50 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/CardKit.framework/CardKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class CRKCardPresentationConfiguration;


@protocol CRKCardPresenting <NSObject>
@property (nonatomic,copy) CRKCardPresentationConfiguration * configuration; 
@property (nonatomic,readonly) id<CRCard> card; 
@required
-(id<CRCard>)card;
-(void)setConfiguration:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3;
-(CRKCardPresentationConfiguration *)configuration;
-(void)setConfiguration:(id)arg1;

@end

