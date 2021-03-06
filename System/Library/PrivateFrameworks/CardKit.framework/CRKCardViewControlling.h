/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:04:50 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/CardKit.framework/CardKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CRKCardViewControlling <CRKEventResponding,CRKFeedbackDelegate,CRCommandHandling>
@property (nonatomic,retain) id<CRCard> card; 
@property (nonatomic,retain) id<CRKCardSectionViewSourcing> cardSectionViewSource; 
@property (assign,nonatomic,__weak) id<CRKCardViewControllerDelegate> cardViewControllerDelegate; 
@required
-(void)setCard:(id)arg1;
-(id<CRCard>)card;
-(id<CRKCardViewControllerDelegate>)cardViewControllerDelegate;
-(id<CRKCardSectionViewSourcing>)cardSectionViewSource;
-(void)setCardSectionViewSource:(id)arg1;
-(void)setCardViewControllerDelegate:(id)arg1;
-(double)contentHeightForWidth:(double)arg1;

@end

