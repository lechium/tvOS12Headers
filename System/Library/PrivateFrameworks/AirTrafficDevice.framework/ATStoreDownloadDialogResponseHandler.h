/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:05:00 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesCloud/ICStoreDialogResponseHandler.h>

@class ATAsset;

@interface ATStoreDownloadDialogResponseHandler : ICStoreDialogResponseHandler {

	ATAsset* _downloadAsset;

}
-(void)handleStoreDialogResponse:(id)arg1 usingRequestContext:(id)arg2 withDialogTimeout:(double)arg3 withCompletionHandler:(/*^block*/id)arg4 ;
-(id)initWithDownloadAsset:(id)arg1 ;
@end

