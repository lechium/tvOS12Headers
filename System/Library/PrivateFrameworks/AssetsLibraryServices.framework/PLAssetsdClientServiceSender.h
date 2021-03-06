/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:00:52 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PLAssetsdClientService.h>

@protocol OS_xpc_object;
@class NSObject, NSString;

@interface PLAssetsdClientServiceSender : NSObject <PLAssetsdClientService> {

	NSObject*<OS_xpc_object> _connection;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_sendMessageForTaskIdentifier:(id)arg1 operation:(long long)arg2 configurationBlock:(/*^block*/id)arg3 ;
-(void)assetAvailableForIdentifier:(id)arg1 success:(BOOL)arg2 error:(id)arg3 ;
-(void)downloadStatusForIdentifier:(id)arg1 progress:(double)arg2 completed:(BOOL)arg3 data:(id)arg4 error:(id)arg5 ;
-(void)downloadFinishedForIdentifier:(id)arg1 success:(BOOL)arg2 url:(id)arg3 data:(id)arg4 info:(id)arg5 error:(id)arg6 ;
-(void)resourceURLReceivedForIdentifier:(id)arg1 url:(id)arg2 info:(id)arg3 error:(id)arg4 ;
-(id)initWithConnection:(id)arg1 ;
-(void)dealloc;
@end

