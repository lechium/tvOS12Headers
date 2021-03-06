/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:04:50 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/CardKit.framework/CardKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CRKCardSectionViewControllerDelegate <CRFeedbackListener>
@optional
-(BOOL)canPerformCommand:(id)arg1 forCardSectionViewController:(id)arg2;
-(BOOL)performCommand:(id)arg1 forCardSectionViewController:(id)arg2;
-(void)cardSectionViewControllerDidFinishLoading:(id)arg1;
-(long long)preferredPunchoutIndexForCardSectionViewController:(id)arg1;
-(void)cardSectionViewControllerBoundsDidChange:(id)arg1;
-(void)presentViewController:(id)arg1 forCardSectionViewController:(id)arg2;
-(void)cardSectionViewController:(id)arg1 didSelectPreferredPunchoutIndex:(long long)arg2;
-(CGSize*)boundingSizeForCardSectionViewController:(id)arg1;
-(void)cardSectionViewController:(id)arg1 requestsHandlingOfIntent:(id)arg2;

@end

