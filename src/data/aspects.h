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

    [ASPECT_BULBASAUR] = 
    {
        .name = _("Bulbasaur"),
        .description = COMPOUND_STRING("Test aspect."),
        .aiRating = 0,
    },
    [ASPECT_IVYSAUR] = 
    {
        .name = _("Ivysaur"),
        .description = COMPOUND_STRING("Test aspect."),
        .aiRating = 0,
    },
    [ASPECT_VENUSAUR] = 
    {
        .name = _("Venusaur"),
        .description = COMPOUND_STRING("Absorbs Fire-type moves."),
        .aiRating = 0,
    },
    
    [ASPECT_CHARMANDER] = 
    {
        .name = _("Charmander"),
        .description = COMPOUND_STRING("Deal neutral damage to Rock-types."),
        .aiRating = 0,
    },
    [ASPECT_CHARMELEON] = 
    {
        .name = _("Charmeleon"),
        .description = COMPOUND_STRING("Deal neutral damage to Rock-types."),
        .aiRating = 0,
    },

    [ASPECT_CHARIZARD] = 
    {
        .name = _("Charizard"),
        .description = COMPOUND_STRING("Deal double damage to Rock-types."),
        .aiRating = 0,
    },
    
    [ASPECT_SQUIRTLE] = 
    {
        .name = _("Squirtle"),
        .description = COMPOUND_STRING("Boost the power of gun moves."),
        .aiRating = 0,
    },
    [ASPECT_WARTORTLE] = 
    {
        .name = _("Wartortle"),
        .description = COMPOUND_STRING("Lives fatal blows from full health."),
        .aiRating = 0,
    },
    [ASPECT_BLASTOISE] = 
    {
        .name = _("Blastoise"),
        .description = COMPOUND_STRING("Boosts the power of gun, projectile, and pulse moves."),
        .aiRating = 0,
    },

};
