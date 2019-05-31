/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:59:18 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextInput/TIPreferencesController.h>

@class NSXPCConnection, NSString;

@interface TIPreferencesControllerClient : TIPreferencesController {

	NSXPCConnection* _connection;
	BOOL _writeable;
	BOOL _isValid;
	NSString* _machName;

}

@property (nonatomic,retain) NSString * machName;              //@synthesize machName=_machName - In the implementation block
@property (assign,nonatomic) BOOL isValid;                     //@synthesize isValid=_isValid - In the implementation block
+(id)serviceInterface;
+(id)sharedPreferencesController;
-(void)_pushValue:(id)arg1 toPreference:(id)arg2 domain:(id)arg3 ;
-(void)performWithWriteability:(BOOL)arg1 operations:(/*^block*/id)arg2 ;
-(void)createConnectionIfNecessary;
-(NSString *)machName;
-(void)setMachName:(NSString *)arg1 ;
-(void)setIsValid:(BOOL)arg1 ;
-(id)init;
-(void)dealloc;
-(void)forwardInvocation:(id)arg1 ;
-(void)updateInputModes:(id)arg1 ;
-(BOOL)isValid;
-(void)_disconnect;
@end

