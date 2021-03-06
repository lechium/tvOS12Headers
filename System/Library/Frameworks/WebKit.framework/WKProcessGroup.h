/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:01:51 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <WebKit/WebKit-Structs.h>
@class WKGeolocationProviderIOS;

@interface WKProcessGroup : NSObject {

	RefPtr<WebKit::WebProcessPool, WTF::DumbPtrTraits<WebKit::WebProcessPool> >* _processPool;
	WeakObjCPtr<id<WKProcessGroupDelegate> > _delegate;
	RetainPtr<WKGeolocationProviderIOS>* _geolocationProvider;

}

@property (readonly) OpaqueWKContextRef _contextRef; 
@property (readonly) WKGeolocationProviderIOS * _geolocationProvider; 
@property (assign) id<WKProcessGroupDelegate> delegate; 
-(WKGeolocationProviderIOS *)_geolocationProvider;
-(id)initWithInjectedBundleURL:(id)arg1 ;
-(OpaqueWKContextRef)_contextRef;
-(void)_setAllowsSpecificHTTPSCertificate:(id)arg1 forHost:(id)arg2 ;
-(id)init;
-(void)setDelegate:(id<WKProcessGroupDelegate>)arg1 ;
-(id<WKProcessGroupDelegate>)delegate;
@end

