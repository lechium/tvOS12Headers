/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:37 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/WatchListKitUI.framework/WatchListKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/IKJSObject.h>
#import <libobjc.A.dylib/WLKUILocationInterface.h>

@protocol WLKUILocationInterface <JSExport>
@required
-(void)requestAuthorization;
-(void)shouldUpdateUserLocation;
-(id)authorizationStatus;

@end


@interface WLKUILocationInterface : IKJSObject <WLKUILocationInterface>
-(void)_authorizationStatusDidChange:(id)arg1 ;
-(void)_locationDidChange:(id)arg1 ;
-(void)requestAuthorization;
-(void)shouldUpdateUserLocation;
-(id)initWithAppContext:(id)arg1 ;
-(void)dealloc;
-(id)authorizationStatus;
@end

