/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:04:13 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TouchRemote/TROperation.h>

@interface TRNetworkOperation : TROperation {

	/*^block*/id _sendingWiFiInfoHandler;

}

@property (nonatomic,copy) id sendingWiFiInfoHandler;              //@synthesize sendingWiFiInfoHandler=_sendingWiFiInfoHandler - In the implementation block
-(void)_handleResponse:(id)arg1 ;
-(void)execute;
-(void)_sendRequestWithSSID:(id)arg1 password:(id)arg2 ;
-(id)sendingWiFiInfoHandler;
-(void)setSendingWiFiInfoHandler:(id)arg1 ;
@end

