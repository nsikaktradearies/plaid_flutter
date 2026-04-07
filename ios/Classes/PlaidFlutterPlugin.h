#import <Flutter/Flutter.h>
#import <LinkKit/LinkKit.h>

@class WKWebView;

@interface PlaidFlutterPlugin : NSObject<FlutterPlugin>

+ (instancetype _Nullable)sharedInstance;
- (BOOL)handleUniversalLink:(NSURL *_Nonnull)url;
- (void)reloadPresentedWebView;

+ (NSDictionary *_Nonnull)dictionaryFromSuccessMetadata:(PLKSuccessMetadata *_Nonnull)metadata;
+ (NSDictionary *_Nonnull)dictionaryFromEventMetadata:(PLKEventMetadata *_Nonnull)metadata;
+ (NSDictionary *_Nonnull)dictionaryFromExitMetadata:(PLKExitMetadata *_Nonnull)metadata;
+ (NSDictionary *_Nonnull)dictionaryFromError:(PLKExitError *_Nonnull)error;
+ (NSString *_Nonnull)stringForEventName:(PLKEventName *_Nonnull)eventName;
@end
