/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:00:47 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CloudPhotoLibrary/CloudPhotoLibrary-Structs.h>
@class NSSet, NSString;

@interface CPLCodingPropertyEntry : NSObject {

	char _propertyType;
	BOOL _readOnly;
	NSSet* _propertyClasses;
	SEL _propertyGetter;
	SEL _propertySetter;
	/*function pointer*/void* _propertyGetterIMP;
	/*function pointer*/void* _propertySetterIMP;
	objc_ivarRef _ivar;
	NSString* _structName;

}

@property (assign,nonatomic) char propertyType;                                        //@synthesize propertyType=_propertyType - In the implementation block
@property (nonatomic,retain) NSSet * propertyClasses;                                  //@synthesize propertyClasses=_propertyClasses - In the implementation block
@property (assign,nonatomic) SEL propertyGetter;                                       //@synthesize propertyGetter=_propertyGetter - In the implementation block
@property (assign,nonatomic) SEL propertySetter;                                       //@synthesize propertySetter=_propertySetter - In the implementation block
@property (assign,nonatomic) /*function pointer*/void* propertyGetterIMP;              //@synthesize propertyGetterIMP=_propertyGetterIMP - In the implementation block
@property (assign,nonatomic) /*function pointer*/void* propertySetterIMP;              //@synthesize propertySetterIMP=_propertySetterIMP - In the implementation block
@property (assign,nonatomic) objc_ivarRef ivar;                                        //@synthesize ivar=_ivar - In the implementation block
@property (assign,getter=isReadOnly,nonatomic) BOOL readOnly;                          //@synthesize readOnly=_readOnly - In the implementation block
@property (nonatomic,copy) NSString * structName;                                      //@synthesize structName=_structName - In the implementation block
-(objc_ivarRef)ivar;
-(char)propertyType;
-(void*)ivarAddrForObject:(id)arg1 ;
-(id)ivarValueForObject:(id)arg1 ;
-(void)setIvarValue:(id)arg1 forObject:(id)arg2 ;
-(void)setPropertyType:(char)arg1 ;
-(NSSet *)propertyClasses;
-(void)setPropertyClasses:(NSSet *)arg1 ;
-(SEL)propertyGetter;
-(void)setPropertyGetter:(SEL)arg1 ;
-(SEL)propertySetter;
-(void)setPropertySetter:(SEL)arg1 ;
-(/*function pointer*/void*)propertyGetterIMP;
-(void)setPropertyGetterIMP:(/*function pointer*/void*)arg1 ;
-(/*function pointer*/void*)propertySetterIMP;
-(void)setPropertySetterIMP:(/*function pointer*/void*)arg1 ;
-(void)setIvar:(objc_ivarRef)arg1 ;
-(NSString *)structName;
-(void)setStructName:(NSString *)arg1 ;
-(BOOL)isReadOnly;
-(void)setReadOnly:(BOOL)arg1 ;
@end

