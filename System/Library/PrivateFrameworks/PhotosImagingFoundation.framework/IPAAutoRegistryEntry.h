/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:29 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/PhotosImagingFoundation.framework/PhotosImagingFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface IPAAutoRegistryEntry : NSObject {

	BOOL _persistable;
	Class _autoCalculatorClass;
	Class _autoSettingsClass;

}

@property (nonatomic,retain) Class autoCalculatorClass;              //@synthesize autoCalculatorClass=_autoCalculatorClass - In the implementation block
@property (nonatomic,retain) Class autoSettingsClass;                //@synthesize autoSettingsClass=_autoSettingsClass - In the implementation block
@property (assign,nonatomic) BOOL persistable;                       //@synthesize persistable=_persistable - In the implementation block
-(Class)autoCalculatorClass;
-(void)setAutoCalculatorClass:(Class)arg1 ;
-(Class)autoSettingsClass;
-(void)setAutoSettingsClass:(Class)arg1 ;
-(BOOL)persistable;
-(void)setPersistable:(BOOL)arg1 ;
@end

