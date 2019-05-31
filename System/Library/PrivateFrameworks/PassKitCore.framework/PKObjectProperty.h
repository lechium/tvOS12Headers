/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:08 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PassKitCore/PassKitCore-Structs.h>
@class NSString;

@interface PKObjectProperty : NSObject {

	NSString* _name;
	NSString* _variableName;
	Class _aClass;
	unsigned long long _type;
	NSString* _valueGetter;

}

@property (nonatomic,copy,readonly) NSString * name;                      //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSString * variableName;              //@synthesize variableName=_variableName - In the implementation block
@property (nonatomic,copy,readonly) Class aClass;                         //@synthesize aClass=_aClass - In the implementation block
@property (nonatomic,readonly) unsigned long long type;                   //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) NSString * valueGetter;               //@synthesize valueGetter=_valueGetter - In the implementation block
-(id)initWithProperty:(objc_propertyRef)arg1 ;
-(NSString *)variableName;
-(Class)aClass;
-(NSString *)valueGetter;
-(NSString *)name;
-(unsigned long long)type;
@end

