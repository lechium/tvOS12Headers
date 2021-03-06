/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:00:51 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssetsLibraryServices/AssetsLibraryServices-Structs.h>
#import <CoreFoundation/NSData.h>

@protocol OS_xpc_object;
@class NSObject;

@interface PLXPCData : NSData {

	NSObject*<OS_xpc_object> _data;

}
-(id)initWithXPCData:(id)arg1 ;
-(unsigned long long)length;
-(void)dealloc;
-(id)debugDescription;
-(const void*)bytes;
-(void)getBytes:(void*)arg1 length:(unsigned long long)arg2 ;
-(void)getBytes:(void*)arg1 range:(NSRange)arg2 ;
@end

