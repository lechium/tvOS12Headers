/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:51 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreServices/_LSLazyPropertyList.h>

@class NSDictionary;

@interface _LSFullLazyPropertyList : _LSLazyPropertyList {

	NSDictionary* _plist;

}
+(BOOL)supportsSecureCoding;
-(id)initWithPropertyList:(id)arg1 ;
-(BOOL)_getPropertyList:(id*)arg1 ;
-(BOOL)_getValue:(id*)arg1 forPropertyListKey:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

