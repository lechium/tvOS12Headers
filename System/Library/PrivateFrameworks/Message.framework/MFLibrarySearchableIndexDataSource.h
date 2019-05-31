/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:48 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MFLibrarySearchableIndexDataSource <NSObject>
@required
-(id)updatesForSearchableIndex:(id)arg1 count:(unsigned long long)arg2;
-(id)searchableIndex:(id)arg1 assignTransaction:(long long)arg2 updates:(id)arg3;
-(void)searchableIndex:(id)arg1 invalidateItemsGreaterThanTransaction:(long long)arg2;
-(id)verificationDataSamplesForSearchableIndex:(id)arg1;

@end
