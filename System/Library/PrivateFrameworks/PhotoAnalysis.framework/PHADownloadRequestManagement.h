/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:24 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PHADownloadRequestManagement <NSObject>
@property (assign) unsigned long long expectedRequestsCount; 
@required
-(void)setExpectedRequestsCount:(unsigned long long)arg1;
-(void)requestPermissionToDownloadWithPhotoLibrary:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(unsigned long long)expectedRequestsCount;

@end

