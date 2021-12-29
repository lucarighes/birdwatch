#ifndef org_apache_lucene_analysis_synonym_SynonymMap$Builder_H
#define org_apache_lucene_analysis_synonym_SynonymMap$Builder_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class CharsRefBuilder;
        class CharsRef;
      }
      namespace analysis {
        namespace synonym {
          class SynonymMap;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
  }
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace synonym {

          class SynonymMap$Builder : public ::java::lang::Object {
           public:
            enum {
              mid_init$_f2cc1bce94666404,
              mid_init$_9d72768e8fdce2b7,
              mid_add_ad3075940a174dd6,
              mid_build_832f3380ff98868b,
              mid_join_24f348ebaea89e1a,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SynonymMap$Builder(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SynonymMap$Builder(const SynonymMap$Builder& obj) : ::java::lang::Object(obj) {}

            SynonymMap$Builder();
            SynonymMap$Builder(jboolean);

            void add(const ::org::apache::lucene::util::CharsRef &, const ::org::apache::lucene::util::CharsRef &, jboolean) const;
            ::org::apache::lucene::analysis::synonym::SynonymMap build() const;
            static ::org::apache::lucene::util::CharsRef join(const JArray< ::java::lang::String > &, const ::org::apache::lucene::util::CharsRefBuilder &);
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace synonym {
          extern PyType_Def PY_TYPE_DEF(SynonymMap$Builder);
          extern PyTypeObject *PY_TYPE(SynonymMap$Builder);

          class t_SynonymMap$Builder {
          public:
            PyObject_HEAD
            SynonymMap$Builder object;
            static PyObject *wrap_Object(const SynonymMap$Builder&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
