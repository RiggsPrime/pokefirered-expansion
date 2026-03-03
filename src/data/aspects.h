const struct AspectInfo gAspectsInfo[ASPECTS_COUNT] =
{
    [ASPECT_NONE] = 
    {
        .name = _("-------"),
        .description = COMPOUND_STRING("No special aspect."),
        .aiRating = 0,
    },

    [ASPECT_TEST] = 
    {
        .name = _("Test Aspect"),
        .description = COMPOUND_STRING("Test aspect."),
        .aiRating = 0,
    },
};
