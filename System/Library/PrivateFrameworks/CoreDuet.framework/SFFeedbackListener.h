/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:59:35 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SFFeedbackListener <NSObject>
@optional
-(void)reportFeedback:(id)arg1 queryId:(long long)arg2;
-(void)searchViewDidAppear:(id)arg1;
-(void)searchViewDidDisappear:(id)arg1;
-(void)cardViewDidDisappear:(id)arg1;
-(void)cardViewDidAppear:(id)arg1;
-(void)didStartSearch:(id)arg1;
-(void)didEndSearch:(id)arg1;
-(void)didRankSections:(id)arg1;
-(void)didEngageResult:(id)arg1;
-(void)didGradeResultRelevancy:(id)arg1;
-(void)didEngageSuggestion:(id)arg1;
-(void)didEngageCardSection:(id)arg1;
-(void)didErrorOccur:(id)arg1;
-(void)sendCustomFeedback:(id)arg1;
-(void)resultsDidBecomeVisible:(id)arg1;
-(void)suggestionsDidBecomeVisible:(id)arg1;
-(void)didReceiveResultsAfterTimeout:(id)arg1;
-(void)didAppendLateSections:(id)arg1;
-(void)didClearInput:(id)arg1;
-(void)didEngageSection:(id)arg1;
-(void)sectionHeaderDidBecomeVisible:(id)arg1;
-(void)didGoToSite:(id)arg1;
-(void)didGoToSearch:(id)arg1;
-(void)didGradeLookupHintRelevancy:(id)arg1;

@end

