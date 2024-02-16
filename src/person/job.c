#include "../../inc/person/job.h"

Job create_job(char *name, int importance, char *sphere, char *ability) {
    Job job;
    job.name = name;
    job.bunker_importance = importance;
    job.post_bunker_importance = importance;
    job.field = sphere;
    job.description = ability;

    return job;
}

