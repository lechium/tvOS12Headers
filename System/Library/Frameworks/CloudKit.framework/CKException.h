/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:59:29 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/NSException.h>

@interface CKException : NSException
-(int)errorCode;
-(id)initWithCode:(int)arg1 format:(id)arg2 args:(char*)arg3 ;
-(id)initWithName:(id)arg1 format:(id)arg2 args:(char*)arg3 ;
-(id)initWithCode:(int)arg1 format:(id)arg2 ;
-(id)initWithName:(id)arg1 format:(id)arg2 ;
-(id)error;
@end

