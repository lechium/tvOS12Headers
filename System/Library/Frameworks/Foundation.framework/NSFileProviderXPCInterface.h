/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:57:12 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSFileProviderXPCInterface <NSFileCoordinationDebugInfoXPCInteface>
@required
-(void)checkInProviderWithReply:(/*^block*/id)arg1;
-(void)provideItemAtURL:(id)arg1 forClaimWithID:(id)arg2 madeByClientWithProcessIdentifier:(int)arg3 options:(unsigned long long)arg4 completionHandler:(/*^block*/id)arg5;
-(oneway void)cancelProvidingItemAtURL:(id)arg1 forClaimWithID:(id)arg2;
-(void)providePhysicalItemForURL:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(oneway void)observePresentationChangeOfKind:(id)arg1 forPresenterWithID:(id)arg2 fromProcessWithIdentifier:(int)arg3 observedUbiquityAttributes:(id)arg4 url:(id)arg5 newURL:(id)arg6;
-(oneway void)observeEndOfWriteAtURL:(id)arg1 forClaimWithID:(id)arg2 fromProcessWithIdentifier:(int)arg3;

@end

