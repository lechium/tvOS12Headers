/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:51 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreServices/CoreServices-Structs.h>
@class NSString;

@interface _LSDisplayNameConstructor : NSObject {

	NSString* _originalName;
	NSString* _baseName;
	NSString* _extension;
	NSString* _secondaryExtension;
	unsigned _wantsHiddenExtension : 1;
	unsigned _isFolder : 1;
	unsigned _hadNonASCIICharacter : 1;
	unsigned _hadColonInFSName : 1;
	unsigned _hadBiDiControlCharacter : 1;
	unsigned _hadForbiddenCharacter : 1;

}
+(id)suffixForRemoteXCTests;
+(void)setSuffixForRemoteXCTests:(id)arg1 ;
+(id)displayNameConstructorWithContext:(LSContext*)arg1 node:(id)arg2 error:(id*)arg3 ;
+(id)displayNameConstructorsWithContext:(LSContext*)arg1 node:(id)arg2 error:(id*)arg3 ;
+(BOOL)showAllExtensions;
+(void)setShowAllExtensions:(BOOL)arg1 ;
+(id)visuallyOrderCharactersInString:(id)arg1 error:(id*)arg2 ;
+(void)getExtensionRange:(NSRange*)arg1 secondaryExtensionRange:(NSRange*)arg2 fromFileName:(id)arg3 considerConfusables:(BOOL)arg4 ;
+(id)concatenateBaseName:(id)arg1 andExtension:(id)arg2 ;
-(id)unlocalizedNameWithContext:(LSContext*)arg1 asIfShowingAllExtensions:(id)arg2 ;
-(BOOL)showExtensionWithContext:(LSContext*)arg1 asIfShowingAllExtensions:(id)arg2 ;
-(id)combineBaseName:(id)arg1 extension:(id)arg2 ;
-(void)getTransformedBaseName:(id*)arg1 extension:(id*)arg2 needsBiDiControlCharacters:(BOOL)arg3 ;
-(id)unlocalizedNameWithContext:(LSContext*)arg1 ;
-(void)getUnlocalizedBaseName:(id*)arg1 extension:(id*)arg2 requiresAdditionalBiDiControlCharacters:(BOOL*)arg3 ;
-(id)initWithContext:(LSContext*)arg1 node:(id)arg2 bundleClass:(const unsigned*)arg3 desiredDisplayName:(id)arg4 treatAsFSName:(BOOL)arg5 ;
-(BOOL)mayHideExtensionWithContext:(LSContext*)arg1 ;
-(BOOL)canSetExtensionHiddenWithContext:(LSContext*)arg1 ;
-(void)initNodeBitsWithContext:(LSContext*)arg1 node:(id)arg2 bundleClass:(const unsigned*)arg3 ;
-(void)initContentBitsWithDisplayName:(id)arg1 treatAsFSName:(BOOL)arg2 ;
-(void)initNamePartsWithDisplayName:(id)arg1 ;
-(id)insertNameComponentBiDiControlCharacters:(id)arg1 ;
-(id)insertCompleteNameBiDiControlCharacters:(id)arg1 ;
-(id)transformBeforeCombining:(id)arg1 needsBiDiControlCharacters:(BOOL*)arg2 ;
-(id)balanceBiDiControlCharacters:(id)arg1 ;
-(BOOL)isStringNaturallyRTL:(id)arg1 ;
-(id)replaceForbiddenCharacters:(id)arg1 ;
-(BOOL)wantsHiddenExtension;
-(id)cleanSecondaryExtension:(id)arg1 ;
-(id)balanceBiDiControlCharacter:(unsigned short)arg1 inString:(id)arg2 imbalanceAmount:(long long)arg3 ;
-(id)init;
@end
