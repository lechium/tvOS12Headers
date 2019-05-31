/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:59:14 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CSSearchableIndexDelegate <NSObject>
@optional
-(void)searchableIndexDidThrottle:(id)arg1;
-(void)searchableIndexDidFinishThrottle:(id)arg1;
-(id)dataForSearchableIndex:(id)arg1 itemIdentifier:(id)arg2 typeIdentifier:(id)arg3 error:(out id*)arg4;
-(id)fileURLForSearchableIndex:(id)arg1 itemIdentifier:(id)arg2 typeIdentifier:(id)arg3 inPlace:(BOOL)arg4 error:(out id*)arg5;

@required
-(void)searchableIndex:(id)arg1 reindexAllSearchableItemsWithAcknowledgementHandler:(/*^block*/id)arg2;
-(void)searchableIndex:(id)arg1 reindexSearchableItemsWithIdentifiers:(id)arg2 acknowledgementHandler:(/*^block*/id)arg3;

@end

