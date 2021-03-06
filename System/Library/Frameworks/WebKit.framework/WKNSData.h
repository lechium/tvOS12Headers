/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:01:51 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <CoreFoundation/NSData.h>
#import <libobjc.A.dylib/WKObject.h>

@class NSString;

@interface WKNSData : NSData <WKObject> {

	ObjectStorage<API::Data> _data;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) Object* _apiObject; 
-(Object*)_apiObject;
-(unsigned long long)length;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(const void*)bytes;
@end

