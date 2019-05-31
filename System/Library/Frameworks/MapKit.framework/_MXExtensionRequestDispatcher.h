/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:08 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/_MXExtensionRequestDispatching.h>
#import <libobjc.A.dylib/_MXExtensionStreamingRequestDispatching.h>

@class NSString;

@interface _MXExtensionRequestDispatcher : NSObject <NSSecureCoding, _MXExtensionRequestDispatching, _MXExtensionStreamingRequestDispatching>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(void)startSendingUpdatesForRequest:(id)arg1 vendor:(id)arg2 toObserver:(id)arg3 ;
-(void)stopSendingUpdatesForRequest:(id)arg1 vendor:(id)arg2 ;
-(void)dispatchRequest:(id)arg1 vendor:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

