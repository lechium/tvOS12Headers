/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:24 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ATDownloadProgressObserver <NSObject>
@required
-(void)atcDidEnqueueAsset:(id)arg1;
-(void)atcDidDownloadAsset:(id)arg1 withError:(id)arg2;
-(void)atcDidUpdateAsset:(id)arg1 withProgress:(float)arg2;

@end

