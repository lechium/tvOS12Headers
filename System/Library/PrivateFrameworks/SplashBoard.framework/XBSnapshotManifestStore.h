/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:28 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/SplashBoard.framework/SplashBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol XBSnapshotManifestStore <NSObject>
@optional
-(void)beginAccessBlockForBundleIdentifier:(id)arg1;
-(void)endAccessBlockForBundleIdentifier:(id)arg1;

@required
-(void)persistManifestData:(id)arg1 forBundleIdentifier:(id)arg2;
-(void)clearManifestDataForBundleIdentifier:(id)arg1;
-(id)loadManifestDataForBundleIdentifier:(id)arg1;
-(void)synchronizeForBundleIdentifier:(id)arg1 withCompletion:(/*^block*/id)arg2;

@end

